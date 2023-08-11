#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 128

/**
 * print_error - display a comprehensive error message to stderr
 * if the file is not an ELF file, or on error
 * Return: 98
 */
void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * print_elf_header - print elf header file
 * @ehdr - pointer to elf header file
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");

	int i  = 0;

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", 
			ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", 
			ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
	printf("  Version:                           %d%s\n", 
			ehdr->e_ident[EI_VERSION], ehdr->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
	case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
	case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
	case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
	case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
	case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
	case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
	case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
	case ELFOSABI_ARM: printf("ARM\n"); break;
	case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
	default: printf("Unknown\n"); break;
	}
	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (ehdr->e_type)
	{
	case ET_NONE: printf("NONE (Unknown type)\n"); break;
	case ET_REL: printf("REL (Relocatable file)\n"); break;
	case ET_EXEC: printf("EXEC (Executable file)\n"); break;
	case ET_DYN: printf("DYN (Shared object file)\n"); break;
	case ET_CORE: printf("CORE (Core file)\n"); break;
	default: printf("Unknown type (%x)\n", ehdr->e_type); break;
	}
	printf("  Entry point address:               %#lx\n", ehdr->e_entry);
	printf("  Start of program headers:          %ld (bytes into file)\n", ehdr->e_phoff);
	printf("  Start of section headers:          %ld (bytes into file)\n", ehdr->e_shoff);
	printf("  Flags:                             %x\n", ehdr->e_flags);
	printf("  Size of this header:               %d (bytes)\n", ehdr->e_ehsize);
	printf("  Size of program headers:            %d (bytes)\n", ehdr->e_phentsize);
	printf("  Number of program headers:          %d\n", ehdr->e_phnum);
	printf("  Size of section headers:            %d (bytes)\n", ehdr->e_shentsize);
	printf("  Number of section headers:          %d\n", ehdr->e_shnum);
	printf("  Section header string table index: %d\n", ehdr->e_shstrndx);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_error("Invalid number of arguments");
	}

	char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	
	if (fd == -1)
	{
		print_error("Cannot open file");
	}
	char buf[BUF_SIZE];
	int n = read(fd, buf, BUF_SIZE);

	if (n == -1)
	{
		print_error("Cannot read file");
	}
	if (n < sizeof(Elf64_Ehdr))
	{
		print_error("File is not an ELF file");
	}
	
	Elf64_Ehdr *ehdr = (Elf64_Ehdr *)buf;

	if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("File is not an ELF file");
	}
	print_elf_header(ehdr);
	return 0;
}
