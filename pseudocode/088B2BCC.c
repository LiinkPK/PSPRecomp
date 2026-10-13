/* Entry 0x088B2BCC | file offset 0x000AFBA4 | FUN_088b2bcc | bytes 92 */

void FUN_088b2bcc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088b2b14(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0xc;
  } while (iVar2 < 2);
  FUN_088b2b14(param_1 + 0x18);
  return;
}

