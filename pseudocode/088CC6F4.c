/* Entry 0x088CC6F4 | file offset 0x000C96CC | FUN_088cc6f4 | bytes 136 */

void FUN_088cc6f4(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    iVar1 = *(int *)(param_1 + 8);
    if (param_2 == -1) {
      if (iVar1 != 0) {
        FUN_0887b944();
      }
    }
    else if (iVar1 == 0) {
      FUN_088cc77c(param_1);
    }
    else {
      FUN_0887ba80(iVar1,FUN_088cc820,param_1);
      FUN_0887b944(*(undefined4 *)(param_1 + 8));
      FUN_0887ba5c(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}

