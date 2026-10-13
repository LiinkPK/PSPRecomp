/* Entry 0x088EC2F8 | file offset 0x000E92D0 | FUN_088ec2f8 | bytes 84 */

void FUN_088ec2f8(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      FUN_088da060();
      *param_1 = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return;
}

