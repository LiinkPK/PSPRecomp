/* Entry 0x089A0060 | file offset 0x0019D038 | FUN_089a0060 | bytes 120 */

undefined4 FUN_089a0060(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000001;
  if (DAT_09af67e8 != 0) {
    sceKernelDeleteEventFlag(DAT_09af67e4);
    sceGeUnsetCallback(DAT_09af6808);
    DAT_09af67e4 = 0xffffffff;
    uVar1 = 0;
    DAT_09af6808 = 0xffffffff;
    DAT_09af6830 = 0;
    DAT_09af67e8 = 0;
  }
  return uVar1;
}

