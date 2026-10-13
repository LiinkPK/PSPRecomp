/* Entry 0x088FC87C | file offset 0x000F9854 | FUN_088fc87c | bytes 80 */

void FUN_088fc87c(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_0887ba80(param_2,FUN_088fcce0,0), iVar1 != 0)) {
    *(int *)(*(int *)(param_1 + 0x30) + 0x1114) = *(int *)(*(int *)(param_1 + 0x30) + 0x1114) + 1;
  }
  return;
}

