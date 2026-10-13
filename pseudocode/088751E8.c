/* Entry 0x088751E8 | file offset 0x000721C0 | FUN_088751e8 | bytes 380 */

bool FUN_088751e8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088fe9e8();
  FUN_08935828(&DAT_09b48870,0,0x3a4);
  DAT_09b48870 = 0x3a4;
  DAT_09b48874 = FUN_08867b90();
  DAT_09b48878 = FUN_08867bb0();
  DAT_09b4887c = 0x11;
  DAT_09b48880 = 0x13;
  DAT_09b48884 = 0x12;
  DAT_09b48888 = 0x10;
  DAT_09b488a0 = 1;
  DAT_09b488a8 = 2;
  DAT_09b488ac = 100;
  DAT_09b488b0 = sceGeEdramGetAddr();
  DAT_09b488b4 = 0x200;
  DAT_09b488b8 = 1;
  if (*(char *)(DAT_089d5ec0 + 0x2ccf) != '\0') {
    DAT_09b488b8 = 3;
  }
  DAT_09b488bc = 0;
  DAT_09b488c0 = 0;
  DAT_09b488c4 = 0x1e0;
  DAT_09b488c8 = 0x110;
  FUN_08935bb4(&DAT_09b488cc,DAT_089d6010,10);
  DAT_09b488d5 = 0;
  FUN_08935bb4(&DAT_09b488d8,"DISSIDIA_012_FF",0xc0);
  DAT_09b48997 = 0;
  DAT_09b48998 = 1;
  uVar1 = FUN_088ad994(DAT_089d712c);
  FUN_08935bb4(&DAT_09b489a0,uVar1,0x80);
  DAT_09b48a1f = 0;
  DAT_09b48a20 = 5;
  DAT_09b48a24 = 0;
  DAT_09b48a28 = 0;
  DAT_09b48a68 = 0;
  DAT_09b48a6c = 0;
  DAT_09b48a70 = 0;
  DAT_09b48ab0 = 0;
  DAT_09b48ab4 = 0;
  DAT_09b48ab8 = 1;
  iVar2 = sceUtilityScreenshotInitStart(&DAT_09b48870);
  return iVar2 == 0;
}

