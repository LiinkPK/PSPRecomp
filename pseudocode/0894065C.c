/* Entry 0x0894065C | file offset 0x0013D634 | FUN_0894065c | bytes 560 */

void FUN_0894065c(int *param_1)

{
  int iVar1;
  
  FUN_089412d0();
  FUN_08941348(param_1);
  if (param_1[0x10] != 0) {
    FUN_08992ec0();
    param_1[0x10] = 0;
  }
  iVar1 = param_1[8];
  if (param_1[0xf] != 0) {
    FUN_08971010(iVar1,param_1[0xf]);
    param_1[0xf] = 0;
    iVar1 = param_1[8];
  }
  FUN_0896ff20(iVar1);
  if (param_1[7] != 0) {
    FUN_08943084(param_1[7],3);
    param_1[7] = 0;
  }
  if (param_1[10] != 0) {
    FUN_089748d0();
    param_1[10] = 0;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      *(undefined **)(iVar1 + 0x24) = &DAT_089db028;
      FUN_08942a50(iVar1);
      FUN_08941ce0(iVar1,0);
      FUN_089748d0(iVar1);
    }
    *param_1 = 0;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      *(undefined **)(iVar1 + 0x24) = &DAT_089dc960;
      FUN_08971b18(iVar1);
      FUN_08941ce0(iVar1,0);
      FUN_089748d0(iVar1);
    }
    param_1[1] = 0;
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      *(undefined **)(iVar1 + 0x24) = &DAT_089dc9c8;
      FUN_0897301c(iVar1);
      FUN_08941ce0(iVar1,0);
      FUN_089748d0(iVar1);
    }
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      *(undefined **)(iVar1 + 0x24) = &DAT_089dca30;
      FUN_08973cac(iVar1);
      FUN_08941ce0(iVar1,0);
      FUN_089748d0(iVar1);
    }
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_089724e4(param_1[4],3);
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    FUN_089735d4(param_1[5],3);
    param_1[5] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_08974940();
    param_1[0xb] = 0;
  }
  if (param_1[8] != 0) {
    FUN_08970f00(param_1[8],3);
    param_1[8] = 0;
  }
  if (param_1[6] != 0) {
    FUN_08974aa4();
    param_1[6] = 0;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}

