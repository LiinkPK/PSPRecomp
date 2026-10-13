/* Entry 0x0893A324 | file offset 0x001372FC | FUN_0893a324 | bytes 348 */

uint FUN_0893a324(undefined4 param_1,undefined1 *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if (param_4 == 1) {
    uVar3 = FUN_0893440c(param_1,&DAT_09af05ac,DAT_089d896c);
    DAT_089d896c = 0;
    PTR_DAT_089d8970 = &DAT_09af05ac;
    return uVar3;
  }
  uVar3 = 0;
  puVar2 = param_2;
  if (param_3 != 0) {
    do {
      *PTR_DAT_089d8970 = *puVar2;
      PTR_DAT_089d8970 = PTR_DAT_089d8970 + 1;
      DAT_089d896c = DAT_089d896c + 1;
      if (0x7f < DAT_089d896c) {
        iVar1 = FUN_0893440c(param_1,&DAT_09af05ac,DAT_089d896c);
        PTR_DAT_089d8970 = &DAT_09af05ac;
        DAT_089d896c = 0;
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

