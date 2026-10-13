/* Entry 0x08947100 | file offset 0x001440D8 | FUN_08947100 | bytes 168 */

void FUN_08947100(int param_1)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = *(int *)(param_1 + 0x68); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x154)) {
    iVar1 = FUN_08944f7c(param_1,iVar2);
    if (iVar1 != 0) {
      FUN_0896fbc0();
    }
    if (*(char *)(iVar2 + 1) == '\x01') {
      FUN_089a0be4((int)*(float *)(iVar2 + 0x194),(int)*(float *)(iVar2 + 0x198));
    }
    else {
      FUN_089a0be4(0x710,0x778);
    }
    FUN_0894678c(iVar2 + 0x50);
  }
  return;
}

