/* Entry 0x088DAB7C | file offset 0x000D7B54 | FUN_088dab7c | bytes 160 */

void FUN_088dab7c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    *param_1 = *(int *)(param_2 + 0x3c);
    iVar2 = *(int *)(param_2 + 0x40);
    iVar1 = *(int *)(param_2 + 0x3c);
  }
  else {
    *(int *)(*(int *)(param_2 + 0x40) + 0x3c) = *(int *)(param_2 + 0x3c);
    iVar2 = *(int *)(param_2 + 0x40);
    iVar1 = *(int *)(param_2 + 0x3c);
  }
  if (iVar1 == 0) {
    param_1[1] = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x40) = iVar2;
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  param_1[2] = param_1[2] + -1;
  if (param_1[1] == 0) {
    param_1[1] = param_2;
    *param_1 = param_2;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    iVar1 = param_1[2];
  }
  else {
    *(int *)(param_1[1] + 0x3c) = param_2;
    iVar1 = param_1[1];
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(int *)(param_2 + 0x40) = iVar1;
    iVar1 = param_1[2];
    param_1[1] = param_2;
  }
  param_1[2] = iVar1 + 1;
  return;
}

