/* Entry 0x0882FC20 | file offset 0x0002CBF8 | FUN_0882fc20 | bytes 100 */

void FUN_0882fc20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (param_2 != *(short *)(param_1 + 0x50))) {
    uVar1 = FUN_0882f664(param_1,param_2);
    FUN_0882f4e4(param_1,uVar1);
  }
  else {
    FUN_0882f4e4(param_1,*(undefined2 *)(*(int *)(param_1 + 0x4c) + 2));
  }
  return;
}

