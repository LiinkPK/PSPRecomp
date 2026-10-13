/* Entry 0x089074D4 | file offset 0x001044AC | FUN_089074d4 | bytes 72 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d815c. Boundary still requires runtime validation. */

void FUN_089074d4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x1644) == 0) && (1 < *(int *)(param_1 + 0x804))) {
    uVar1 = 0x45610000;
  }
  else {
    uVar1 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x166c) = uVar1;
  return;
}

