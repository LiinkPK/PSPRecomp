/* Entry 0x088ED80C | file offset 0x000EA7E4 | FUN_088ed80c | bytes 512 */

void FUN_088ed80c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0xffffffff;
  local_1c = *(undefined4 *)(&DAT_089ccb80 + *(int *)(DAT_089d7f00 + 0x180) * 4);
  iVar1 = sceMpegAvcDecodeMode(DAT_089d7f00 + 0x1c,&local_20);
  if (iVar1 == 0) {
    iVar1 = sceMpegQueryStreamOffset(DAT_089d7f00 + 0x1c,param_1,DAT_089d7f00 + 0x158);
    if (iVar1 == 0) {
      iVar1 = *(int *)(DAT_089d7f00 + 0x158);
      if ((*(uint *)(DAT_089d7f00 + 0x144) & 0x80) == 0) {
        sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c),DAT_089d7f00,iVar1,iVar1 >> 0x1f,0);
      }
      else {
        *(int *)(DAT_089d7f00 + 0x158) = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x15)) >> 0xb;
        sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c),*(int *)(DAT_089d7f00 + 0x150),
                   *(int *)(DAT_089d7f00 + 0x150) + *(int *)(DAT_089d7f00 + 0x158),0,0);
      }
      sceMpegFlushAllStream(DAT_089d7f00 + 0x1c);
      if ((*(uint *)(DAT_089d7f00 + 8) & 1) != 0) {
        uVar2 = sceMpegRegistStream(DAT_089d7f00 + 0x1c,0,0);
        *(undefined4 *)(DAT_089d7f00 + 0xa0) = uVar2;
        if (*(int *)(DAT_089d7f00 + 0xa0) == 0) {
          FUN_088edb7c();
          return;
        }
      }
      if ((*(uint *)(DAT_089d7f00 + 8) & 2) != 0) {
        uVar2 = sceMpegRegistStream(DAT_089d7f00 + 0x1c,1,0);
        *(undefined4 *)(DAT_089d7f00 + 0xa4) = uVar2;
        if (*(int *)(DAT_089d7f00 + 0xa4) == 0) {
          FUN_088edb7c();
          return;
        }
      }
      if ((*(uint *)(DAT_089d7f00 + 8) & 4) != 0) {
        uVar2 = sceMpegRegistStream(DAT_089d7f00 + 0x1c,2,0);
        *(undefined4 *)(DAT_089d7f00 + 0xa8) = uVar2;
        if (*(int *)(DAT_089d7f00 + 0xa8) == 0) {
          FUN_088edb7c();
        }
      }
    }
    else {
      FUN_088edb7c();
    }
  }
  else {
    FUN_088edb7c();
  }
  return;
}

