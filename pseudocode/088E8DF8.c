/* Entry 0x088E8DF8 | file offset 0x000E5DD0 | FUN_088e8df8 | bytes 260 */

void FUN_088e8df8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x3c;
  iVar1 = FUN_089359e8(iVar4);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar2 = FUN_088dfc40(0x100000);
      *(undefined4 *)(param_1 + 0x38) = uVar2;
    }
    uVar2 = FUN_08862c40(iVar4,1);
    uVar3 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5ec0 + 0x710),uVar2,0x40,0,1,1);
    FUN_08862854(iVar4,uVar3,uVar2,0);
    uVar2 = FUN_088dfc30();
    FUN_088e0ad8(param_1 + 0x90,uVar3,uVar2,*(undefined4 *)(param_1 + 0x38),0x100000,0);
    if (*(char *)(param_1 + 0x1849) == '\0') {
      FUN_088e93ec(param_1);
    }
    FUN_0885c538(*(undefined4 *)(DAT_089d5ec0 + 0x710),uVar3,0x40);
  }
  return;
}

