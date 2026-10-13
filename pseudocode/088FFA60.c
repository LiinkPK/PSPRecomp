/* Entry 0x088FFA60 | file offset 0x000FCA38 | FUN_088ffa60 | bytes 88 */

void FUN_088ffa60(void)

{
  int iVar1;
  
  sceKernelDeleteSema(*(undefined4 *)(DAT_089d8128 + 0x3e04));
  iVar1 = DAT_089d8128;
  *(undefined2 *)(DAT_089d8128 + 0x3e08) = 0xffff;
  *(undefined4 *)(iVar1 + 0x3e04) = 0xffffffff;
  sceKernelDeleteSema(*(undefined4 *)(DAT_089d8128 + 0x3dfc));
  sceKernelDeleteEventFlag(*(undefined4 *)(DAT_089d8128 + 0x3e00));
  return;
}

