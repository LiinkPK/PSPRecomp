/* Entry 0x08907728 | file offset 0x00104700 | FUN_08907728 | bytes 80 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d8194. Boundary still requires runtime validation. */

void FUN_08907728(int param_1)

{
  if (*(int *)(param_1 + 0x1644) == 0) {
    *(undefined4 *)(param_1 + 0x1670) = 0;
    *(undefined4 *)(param_1 + 0x1674) = 0;
    *(undefined4 *)(param_1 + 0x1678) = 0;
  }
  else if (*(int *)(param_1 + 0x5c) < 1) {
    *(undefined4 *)(param_1 + 0x167c) = 4;
    *(undefined4 *)(param_1 + 0x1680) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x167c) = 0;
    *(undefined4 *)(param_1 + 0x1680) = 0;
  }
  return;
}

