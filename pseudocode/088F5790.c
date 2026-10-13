/* Entry 0x088F5790 | file offset 0x000F2768 | FUN_088f5790 | bytes 116 */

void FUN_088f5790(int param_1)

{
  int iVar1;
  
  FUN_088f4b68(param_1);
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + iVar1 + 0xe8) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  FUN_08935828(param_1 + 0xed,0,3);
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)(param_1 + 0xf2) = 0xffff;
  return;
}

