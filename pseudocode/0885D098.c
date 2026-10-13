/* Entry 0x0885D098 | file offset 0x0005A070 | FUN_0885d098 | bytes 672 */

void FUN_0885d098(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  bVar1 = param_2 == param_3;
  uVar3 = FUN_0885d074(param_1,param_4);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      bVar2 = param_4 - 7U <= uVar4;
      if (bVar1) {
        if (bVar2) {
          iVar5 = 0;
          puVar6 = param_2 + param_4;
          if (0 < (int)(uVar3 - param_4)) {
            do {
              *puVar6 = 0;
              iVar5 = iVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar5 < (int)(uVar3 - param_4));
          }
          FUN_0885d41c(param_1,param_2,param_2 + 4);
        }
        else {
          FUN_0885d41c(param_1,param_2,param_2 + 4);
        }
      }
      else {
        if (bVar2) {
          iVar5 = 0;
          puVar6 = param_3;
          if (0 < (int)(param_4 - uVar4)) {
            do {
              iVar5 = iVar5 + 1;
              *puVar6 = *param_2;
              param_2 = param_2 + 1;
              puVar6 = puVar6 + 1;
            } while (iVar5 < (int)(param_4 - uVar4));
          }
          for (; iVar5 < 8; iVar5 = iVar5 + 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          FUN_0885d41c(param_1,param_3,param_3 + 4);
        }
        else {
          iVar5 = 0;
          puVar6 = param_2;
          puVar7 = param_3;
          do {
            iVar5 = iVar5 + 1;
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar5 < 8);
          FUN_0885d41c(param_1,param_3,param_3 + 4);
        }
        param_3 = param_3 + 8;
      }
      param_2 = param_2 + 8;
      uVar4 = uVar4 + 8;
    } while (uVar4 < uVar3);
  }
  return;
}

