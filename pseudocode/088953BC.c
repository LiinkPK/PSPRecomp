/* Entry 0x088953BC | file offset 0x00092394 | FUN_088953bc | bytes 52 */

void FUN_088953bc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_089d5ec0;
  if (*(char *)(param_1 + 0x84) != '\0') {
    *(undefined4 *)(DAT_089d5ec0 + 0x8b0) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(iVar1 + 0x8b4) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar1 + 0x8b8) = *(undefined4 *)(param_1 + 0x80);
  }
  return;
}

