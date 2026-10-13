/* Entry 0x0898FFB0 | file offset 0x0018CF88 | FUN_0898ffb0 | bytes 116 */

undefined4 FUN_0898ffb0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_089da420 == 0) {
    iVar1 = FUN_08990ea0(0x908);
    iVar2 = 0;
    if (iVar1 != 0) {
      FUN_08990ed8(iVar1);
      iVar2 = iVar1;
    }
    DAT_089da420 = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

