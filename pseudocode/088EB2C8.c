/* Entry 0x088EB2C8 | file offset 0x000E82A0 | FUN_088eb2c8 | bytes 168 */

void FUN_088eb2c8(void)

{
  int iVar1;
  int iVar2;
  
  if (((DAT_089d7ec8 == -1) && (iVar1 = FUN_088fe7c8("sound/snd_region_enc.scd",0), iVar1 != 0)) &&
     (iVar2 = FUN_088a0128(), iVar2 != 0)) {
    FUN_088fe708("sound/snd_region_enc.scd",iVar2,iVar1,0);
    DAT_089d7ec8 = FUN_088a15b8(DAT_089d6c88,iVar2,iVar1);
  }
  return;
}

