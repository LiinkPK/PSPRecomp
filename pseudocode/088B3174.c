/* Entry 0x088B3174 | file offset 0x000B014C | FUN_088b3174 | bytes 64 */

void FUN_088b3174(int param_1)

{
  int iVar1;
  
  FUN_088b2bcc(param_1);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

