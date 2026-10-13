/* Entry 0x08936794 | file offset 0x0013376C | FUN_08936794 | bytes 348 */

uint FUN_08936794(undefined4 param_1,undefined1 *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if (param_4 == 1) {
    uVar3 = FUN_0893440c(param_1,&DAT_09af0360,DAT_089d8910);
    DAT_089d8910 = 0;
    PTR_DAT_089d8914 = &DAT_09af0360;
    return uVar3;
  }
  uVar3 = 0;
  puVar2 = param_2;
  if (param_3 != 0) {
    do {
      *PTR_DAT_089d8914 = *puVar2;
      PTR_DAT_089d8914 = PTR_DAT_089d8914 + 1;
      DAT_089d8910 = DAT_089d8910 + 1;
      if (0x7f < DAT_089d8910) {
        iVar1 = FUN_0893440c(param_1,&DAT_09af0360,DAT_089d8910);
        PTR_DAT_089d8914 = &DAT_09af0360;
        DAT_089d8910 = 0;
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
      puVar2 = param_2 + uVar3;
    } while (uVar3 < param_3);
  }
  return uVar3;
}

