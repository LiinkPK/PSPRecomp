/* Entry 0x0886A3F4 | file offset 0x000673CC | FUN_0886a3f4 | bytes 344 */

void FUN_0886a3f4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xffffffef;
  FUN_0886a6a4(param_1);
  FUN_089b0d40(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),1,0);
  FUN_089b0d64(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),4,0);
  FUN_089b0d40(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),4,0xffffffff);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
  if ((param_2 == 0) || ((*(uint *)(param_2 + 0x48) & 1) == 0)) {
    FUN_089b0d40(uVar2,2,0);
  }
  else {
    FUN_089b0d40(uVar2,2,0xffffffff);
  }
  FUN_089a296c(2);
  FUN_089a250c();
  FUN_089b0cc4(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),param_2);
  iVar1 = FUN_0886a298(param_1,param_2,1);
  if (iVar1 != 0) {
    FUN_089b0d88(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),1,0);
    FUN_089a0c20(*(undefined4 *)(param_2 + 0x44));
    FUN_089a0e60(0,0);
    FUN_089a0384(0x15);
    FUN_089b4798(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
    FUN_089a03dc(0x15);
  }
  if (*(int *)(param_2 + 0x44) != -1) {
    FUN_089a0c20(0xffffffff);
  }
  return;
}

