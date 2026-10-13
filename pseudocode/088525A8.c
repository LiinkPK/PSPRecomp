/* Entry 0x088525A8 | file offset 0x0004F580 | FUN_088525a8 | bytes 80 */

void FUN_088525a8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_2 == -1) || (*param_1 == param_2)) {
      param_1[0xcd] = 0;
      param_1[0xcc] = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xd0;
  } while (iVar1 < 2);
  return;
}

