/* Entry 0x08886C88 | file offset 0x00083C60 | FUN_08886c88 | bytes 900 */

void FUN_08886c88(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_80 [2];
  undefined1 auStack_7e [40];
  short local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_38;
  undefined1 local_30;
  undefined1 auStack_24 [4];
  
  uVar3 = DAT_089d5eac;
  if (*(char *)(param_1 + 0x16) != '\0') {
    func_0x08afcc80(*param_1);
    func_0x08afcc80(param_1[1]);
    func_0x08ae090c(param_1[6],*param_1);
    func_0x08ae090c(param_1[7],param_1[1]);
    func_0x08afcdac(uVar3,*param_1);
    func_0x08afcdac(uVar3,param_1[1]);
    func_0x08ae09c4(param_1[6],*param_1);
    func_0x08ae09c4(param_1[7],param_1[1]);
    func_0x08ae0ab0(param_1[6],*param_1);
    func_0x08ae0ab0(param_1[7],param_1[1]);
    iVar4 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[2] != 0) {
        func_0x08aece14(puVar5[2],*puVar5);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 2);
    func_0x08aefbbc(param_1[4],*param_1);
    func_0x08aefbbc(param_1[5],param_1[1]);
    func_0x08aebf10(param_1[8],*param_1);
    func_0x08aebf10(param_1[9],param_1[1]);
    iVar4 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[10] != 0) {
        func_0x08aed330(puVar5[10],*puVar5);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 2);
    iVar4 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[0xc] != 0) {
        func_0x08adc5c0(puVar5[0xc],*puVar5);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 2);
    iVar4 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[0xe] != 0) {
        func_0x08aeba2c(puVar5[0xe],*puVar5);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 2);
    iVar4 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[0x12] != 0) {
        func_0x08aef4b0(puVar5[0x12],*puVar5);
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 2);
    func_0x08afcc88(*param_1);
    func_0x08afcc88(param_1[1]);
    func_0x08ae3a30();
    FUN_0888fa30(uVar3,param_1 + 0x1d);
    FUN_0885eb68(*(undefined4 *)(DAT_089d69e0 + 0x18),param_1 + 0x17);
    iVar4 = *(int *)param_1[0x14];
    iVar4 = (**(code **)(iVar4 + 0xc))((int)param_1[0x14] + (int)*(short *)(iVar4 + 8),param_1);
    if ((iVar4 == 0) && (piVar2 = (int *)param_1[0x15], piVar2 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),param_1);
    }
    if (iVar4 < 2) {
      if (0 < iVar4) {
        uVar3 = *(undefined4 *)*param_1;
        param_1[0x2e] = 0;
        param_1[0x2d] = uVar3;
      }
    }
    else if (iVar4 < 3) {
      uVar3 = *(undefined4 *)param_1[1];
      param_1[0x2e] = 1;
      param_1[0x2d] = uVar3;
    }
    else if (iVar4 < 4) {
      uVar3 = *(undefined4 *)param_1[1];
      param_1[0x2e] = 2;
      param_1[0x2d] = uVar3;
    }
    iVar1 = FUN_0888696c(param_1);
    if (iVar1 == 1) {
      if ((char)DAT_09afde50 == '\x01') {
        FUN_08887cbc(auStack_80,auStack_7e,*param_1,iVar4 == 1,0);
        if (0 < local_56) {
          func_0x089eb798(&local_54);
          local_54 = 0;
          local_38 = 1;
          local_30 = 1;
          local_50 = 0xca;
          FUN_0888ace4(&local_54);
          func_0x089eb7d0(&local_54,2);
        }
      }
      else if ((iVar4 == 1) && (param_1[0xe] != 0)) {
        func_0x08aebbb0(param_1[0xe],auStack_24,*param_1);
      }
    }
  }
  return;
}

