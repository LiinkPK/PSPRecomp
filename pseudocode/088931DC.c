/* Entry 0x088931DC | file offset 0x000901B4 | FUN_088931dc | bytes 60 */

undefined1 FUN_088931dc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + 0x612) == param_2) {
      return *(undefined1 *)(param_1 + 0x618);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 10;
  } while (iVar1 < 0x10);
  return 0xff;
}

