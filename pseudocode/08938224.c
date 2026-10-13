/* Entry 0x08938224 | file offset 0x001351FC | FUN_08938224 | bytes 348 */

uint FUN_08938224(undefined4 param_1,undefined1 *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if (param_4 == 1) {
    uVar3 = FUN_0893440c(param_1,&DAT_09af03e0,DAT_089d8918);
    DAT_089d8918 = 0;
    PTR_DAT_089d891c = &DAT_09af03e0;
    return uVar3;
  }
  uVar3 = 0;
  puVar2 = param_2;
  if (param_3 != 0) {
    do {
      *PTR_DAT_089d891c = *puVar2;
      PTR_DAT_089d891c = PTR_DAT_089d891c + 1;
      DAT_089d8918 = DAT_089d8918 + 1;
      if (0x7f < DAT_089d8918) {
        iVar1 = FUN_0893440c(param_1,&DAT_09af03e0,DAT_089d8918);
        PTR_DAT_089d891c = &DAT_09af03e0;
        DAT_089d8918 = 0;
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

