/* Entry 0x089A5F60 | file offset 0x001A2F38 | FUN_089a5f60 | bytes 156 */

uint FUN_089a5f60(void)

{
  uint uVar1;
  uint uVar2;
  int local_20;
  uint local_1c [3];
  
  uVar1 = sceIoDevctl("fatms0:",0x2425823,0,0,&local_20,4);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)(local_20 == 1);
  }
  uVar2 = 0x80020321;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  if ((uVar1 == 1) &&
     (uVar1 = sceIoDevctl(&DAT_089d0990,0x2425824,0,0,local_1c,4), uVar2 = local_1c[0],
     (int)uVar1 < 0)) {
    uVar2 = uVar1;
  }
  return uVar2;
}

