/* Entry 0x08837CF0 | file offset 0x00034CC8 | FUN_08837cf0 | bytes 40 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6b8c,089c719c,089c73b4,089c7814,089c7de4,089c8c44. Boundary still requires runtime
   validation. */

void FUN_08837cf0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xfffeffff;
  return;
}

