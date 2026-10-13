/* Entry 0x08837CAC | file offset 0x00034C84 | FUN_08837cac | bytes 68 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6b84,089c7194,089c73ac,089c780c,089c7ddc,089c8c3c. Boundary still requires runtime
   validation. */

void FUN_08837cac(int param_1)

{
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) | 0x10000;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  return;
}

