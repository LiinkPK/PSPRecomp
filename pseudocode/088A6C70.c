/* Entry 0x088A6C70 | file offset 0x000A3C48 | FUN_088a6c70 | bytes 72 */

void FUN_088a6c70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088a751c();
  if (iVar1 == 1) {
    FUN_088a44f8(*(undefined4 *)(param_1 + 0xcc),0);
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 2;
  }
  return;
}

