/* Entry 0x0885D338 | file offset 0x0005A310 | FUN_0885d338 | bytes 228 */

void FUN_0885d338(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar1 = param_2 == param_3;
  if (param_4 != 0) {
    do {
      puVar4 = param_2 + 8;
      if (bVar1) {
        FUN_0885da60(param_1,param_2,param_2 + 4);
      }
      else {
        iVar2 = 0;
        puVar3 = param_3;
        do {
          iVar2 = iVar2 + 1;
          *puVar3 = *param_2;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < 8);
        FUN_0885da60(param_1,param_3,param_3 + 4);
        param_3 = param_3 + 8;
      }
      uVar5 = uVar5 + 8;
      param_2 = puVar4;
    } while (uVar5 < param_4);
  }
  return;
}

