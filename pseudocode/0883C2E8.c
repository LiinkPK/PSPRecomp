/* Entry 0x0883C2E8 | file offset 0x000392C0 | FUN_0883c2e8 | bytes 1236 */

void FUN_0883c2e8(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0x542) == '\0') {
    func_0x08ac4960(param_1 + 0x800,param_1);
  }
  uVar2 = *(uint *)(param_1 + 0x380);
  if ((uVar2 & 0x80000) == 0) {
    (**(code **)(*(int *)(param_1 + 0x544) + 0x1c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x18));
    uVar6 = *(undefined4 *)(param_1 + 0x394);
    fVar8 = (float)FUN_08838300(param_1);
    FUN_0886e5d0(uVar6,(int)fVar8);
    iVar7 = param_1 + 0x130;
    uVar2 = *(uint *)(param_1 + 0x380) & 1;
    if (uVar2 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x394);
      fVar8 = (float)FUN_08838300(param_1);
      FUN_0886ab1c(uVar6,param_1 + 0x164,(int)fVar8);
      uVar2 = *(uint *)(param_1 + 0x380) & 1;
    }
    if (uVar2 == 0) {
      FUN_0882f784(iVar7);
    }
    FUN_0882f774(iVar7);
    (**(code **)(*(int *)(param_1 + 0x544) + 0x2c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x28));
    cVar5 = *(char *)(param_1 + 0x542);
    if ((cVar5 != '\x05') && (cVar5 != '\x06')) {
      FUN_0883af80(param_1);
      cVar5 = *(char *)(param_1 + 0x542);
    }
    iVar3 = *(int *)(param_1 + 0x544);
    if (((cVar5 != '\x05') || ((*(uint *)(param_1 + 0x380) & 1) == 0)) ||
       ((*(uint *)(param_1 + 0x388) & 2) == 0)) {
      (**(code **)(iVar3 + 0xec))(param_1 + *(short *)(iVar3 + 0xe8));
      iVar3 = *(int *)(param_1 + 0x544);
    }
    (**(code **)(iVar3 + 0x34))(param_1 + *(short *)(iVar3 + 0x30));
    uVar2 = *(uint *)(param_1 + 0x380) & 1;
    if (uVar2 == 0) {
      FUN_0886ac98(*(undefined4 *)(param_1 + 0x394));
      uVar2 = *(uint *)(param_1 + 0x380) & 1;
    }
    if (uVar2 == 0) {
      FUN_08831994(param_1);
    }
    if ((*(char *)(param_1 + 0x542) != '\x05') || ((*(uint *)(param_1 + 0x380) & 1) == 0)) {
      FUN_0886ac64(*(undefined4 *)(param_1 + 0x394));
    }
    iVar3 = FUN_0883739c(param_1);
    iVar4 = *(int *)(param_1 + 0x544);
    if (((iVar3 != 0) || (cVar5 = *(char *)(param_1 + 0x542), cVar5 == '\x03')) ||
       ((cVar5 == '\x04' || (cVar5 == '\b')))) {
      (**(code **)(iVar4 + 0x3c))(param_1 + *(short *)(iVar4 + 0x38));
      iVar4 = *(int *)(param_1 + 0x544);
    }
    (**(code **)(iVar4 + 0xb4))(param_1 + *(short *)(iVar4 + 0xb0));
    (**(code **)(*(int *)(param_1 + 0x544) + 0x44))
              (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x40));
    FUN_08831dbc(param_1);
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar2 = *(uint *)(param_1 + 0x38c);
    }
    else {
      uVar1 = FUN_0882f664(iVar7,(int)*(short *)(param_1 + 0x180));
      *(undefined2 *)(param_1 + 0x524) = uVar1;
      if ((*(uint *)(param_1 + 0x184) & 1) == 0) {
        *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xfeffffff;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x390) + 0x5c);
        FUN_088a990c(param_1 + 0x4c8,uVar6,(int)*(short *)(param_1 + 0x524));
        FUN_088a98b4(param_1 + 0x4c8,uVar6,(int)*(short *)(param_1 + 0x524),0,0);
        *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x1000000;
        *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) & 0xfffffffe;
      }
      fVar8 = (float)FUN_08838300(param_1);
      *(float *)(param_1 + 0x318) = *(float *)(param_1 + 0x318) + fVar8;
      if (0.0 < *(float *)(param_1 + 0x31c)) {
        fVar8 = (float)FUN_08838300(param_1);
        *(float *)(param_1 + 0x31c) = *(float *)(param_1 + 0x31c) - fVar8;
        uVar2 = *(uint *)(param_1 + 0x38c);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x38c);
      }
    }
    if (((uVar2 & 0x200) != 0) && (*(float *)(param_1 + 0x3b0) <= 0.0)) {
      (**(code **)(*(int *)(param_1 + 0x544) + 0x164))
                (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x160));
    }
  }
  else {
    if ((uVar2 & 0x10000) != 0) {
      uVar2 = uVar2 & 0xfffeffff;
      *(uint *)(param_1 + 0x380) = uVar2;
    }
    if ((uVar2 & 0x40000) != 0) {
      uVar2 = uVar2 & 0xfffbffff;
      *(uint *)(param_1 + 0x380) = uVar2;
    }
    if ((uVar2 & 0x10) != 0) {
      uVar2 = uVar2 & 0xffffffef;
      *(uint *)(param_1 + 0x380) = uVar2;
    }
    if ((uVar2 & 0x200) != 0) {
      uVar2 = uVar2 & 0xfffffdff;
      *(uint *)(param_1 + 0x380) = uVar2;
    }
    if ((uVar2 & 0x8000000) != 0) {
      *(uint *)(param_1 + 0x380) = uVar2 & 0xf7ffffff;
    }
  }
  return;
}

