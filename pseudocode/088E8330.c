/* Entry 0x088E8330 | file offset 0x000E5308 | FUN_088e8330 | bytes 260 */

void FUN_088e8330(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x44) = param_3;
  iVar4 = 0;
  iVar3 = param_1;
  do {
    iVar1 = FUN_0885ca98(param_2,1,0x7773616d,iVar4);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0xc),0,0,1,0);
    *(undefined4 *)(iVar3 + 4) = uVar2;
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 0xc);
    FUN_08935524(uVar2,*(undefined4 *)(iVar1 + 8));
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 8;
  } while (iVar4 < 8);
  return;
}

