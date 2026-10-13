/* Entry 0x0882FC84 | file offset 0x0002CC5C | FUN_0882fc84 | bytes 100 */

void FUN_0882fc84(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (param_2 != *(short *)(param_1 + 0x50))) {
    uVar1 = FUN_0882f664(param_1,param_2);
    FUN_0882f504(param_1,uVar1);
  }
  else {
    FUN_0882f504(param_1,*(undefined2 *)(*(int *)(param_1 + 0x4c) + 2));
  }
  return;
}

