/* Entry 0x089A84F8 | file offset 0x001A54D0 | FUN_089a84f8 | bytes 348 */

undefined4 FUN_089a84f8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x2c);
    uVar6 = FUN_089a92c4();
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x50);
    *(undefined8 *)(iVar4 * 0x10 + param_3) = uVar6;
    *(int *)(iVar3 * 0x10 + param_3 + 8) = iVar1 * 8 + 0x18;
    *(undefined4 *)(*(int *)(param_1 + 0x2c) * 0x10 + param_3 + 0xc) =
         *(undefined4 *)(param_1 + 0x50);
    iVar1 = FUN_089a8654(param_1,param_2,0x30307869,*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x1a0));
    if (iVar1 != 0) {
      return 0x80660001;
    }
    uVar2 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar2 & 2) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar6 = FUN_089a92c4(param_1);
    *(int *)(*(int *)(param_1 + 0x2c) * 0x10 + param_4 + 8) = *(int *)(param_1 + 0x54) * 8 + 0x18;
    iVar3 = *(int *)(param_1 + 0x2c);
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    *(undefined8 *)(iVar1 * 0x10 + param_4) = uVar6;
    *(undefined4 *)(iVar3 * 0x10 + param_4 + 0xc) = uVar5;
    iVar1 = FUN_089a8654(param_1,param_2,0x31307869,*(undefined4 *)(param_1 + 0x54),
                         *(undefined4 *)(param_1 + 0x1b8));
    if (iVar1 != 0) {
      return 0x80660001;
    }
  }
  return 0;
}

