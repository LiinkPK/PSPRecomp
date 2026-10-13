/* Entry 0x088FA9A8 | file offset 0x000F7980 | FUN_088fa9a8 | bytes 164 */

void FUN_088fa9a8(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_088470b8(param_2);
  if (puVar1 != (undefined2 *)0x0) {
    FUN_088f9bb0(param_1,(int)*(char *)(puVar1 + 3),0,param_3,0xffffffff,0xffffffff);
    (&DAT_09afc7da)[param_1 * 0x830] = *puVar1;
    (&DAT_09afc8f8)[param_1 * 0x1060] = *(undefined1 *)(puVar1 + 3);
    (&DAT_09afc8f9)[param_1 * 0x1060] = *(undefined1 *)((int)puVar1 + 7);
  }
  return;
}

