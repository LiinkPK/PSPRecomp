/* Entry 0x088E8EFC | file offset 0x000E5ED4 | FUN_088e8efc | bytes 268 */

void FUN_088e8efc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = FUN_088dfc40(0x100000);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
  }
  uVar1 = FUN_089276b8(DAT_089d8530,param_1 + 0x7c);
  uVar2 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5ec0 + 0x710),uVar1,0x40,0,1,1);
  uVar1 = FUN_08927754(DAT_089d8530,param_1 + 0x7c,uVar2,uVar1);
  uVar3 = FUN_088dfc30();
  FUN_088e0ad8(param_1 + 0x90,uVar1,uVar3,*(undefined4 *)(param_1 + 0x38),0x100000,0);
  FUN_08927998(DAT_089d8530);
  FUN_088e93ec(param_1);
  FUN_0885c538(*(undefined4 *)(DAT_089d5ec0 + 0x710),uVar2,0x40);
  return;
}

