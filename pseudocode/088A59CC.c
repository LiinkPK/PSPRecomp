/* Entry 0x088A59CC | file offset 0x000A29A4 | FUN_088a59cc | bytes 132 */

int FUN_088a59cc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(char *)(param_1 + 100) != '\x01' ||
         (iVar1 = FUN_0893585c(param_1 + 0x38,param_2), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x68;
    if (0x2c < iVar2) {
      return 0;
    }
  }
  return param_1;
}

