/* Entry 0x0888700C | file offset 0x00083FE4 | FUN_0888700c | bytes 1248 */

void FUN_0888700c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int local_4c;
  undefined4 *local_38;
  
  local_38 = &DAT_09afb8a0;
  puVar10 = &DAT_09afe05c;
  iVar7 = 0;
  piVar6 = param_1;
  puVar8 = puVar10;
  do {
    iVar2 = func_0x08afcd74(0x130);
    iVar3 = 0;
    if (iVar2 != 0) {
      func_0x08afcb68(iVar2);
      iVar3 = iVar2;
    }
    *piVar6 = iVar3;
    iVar2 = func_0x08afcb28(0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      func_0x08aefb88(iVar2);
      iVar3 = iVar2;
    }
    piVar6[4] = iVar3;
    iVar2 = func_0x08afcb28(0x308);
    iVar3 = 0;
    if (iVar2 != 0) {
      func_0x08ae05a4(iVar2);
      iVar3 = iVar2;
    }
    piVar6[6] = iVar3;
    iVar2 = func_0x08afcb28(0x10);
    iVar3 = 0;
    if (iVar2 != 0) {
      func_0x08aebee8(iVar2);
      iVar3 = iVar2;
    }
    piVar6[8] = iVar3;
    iVar2 = func_0x08afcb28(0x2c);
    iVar3 = 0;
    if (iVar2 != 0) {
      func_0x08aed2c0(iVar2);
      iVar3 = iVar2;
    }
    piVar6[10] = iVar3;
    if ((iVar7 == 0) && (-1 < *(short *)(puVar8 + 3))) {
      iVar2 = func_0x08afcb28(0x14);
      iVar3 = 0;
      if (iVar2 != 0) {
        func_0x08aeb9d0(iVar2);
        iVar3 = iVar2;
      }
      piVar6[0xe] = iVar3;
    }
    if ((DAT_09afde50._3_1_ & 1) != 0) {
      iVar3 = func_0x08afcb28(0x18);
      if (iVar3 == 0) {
        piVar6[0x10] = 0;
      }
      else {
        func_0x08add7c8(iVar3);
        piVar6[0x10] = iVar3;
      }
    }
    if ((DAT_09afde50._3_1_ & 2) != 0) {
      iVar3 = func_0x08afcb28(0x10);
      if (iVar3 == 0) {
        piVar6[2] = 0;
      }
      else {
        func_0x08aecdc0(iVar3);
        piVar6[2] = iVar3;
      }
    }
    if ((DAT_09afde50._3_1_ & 8) != 0) {
      iVar3 = func_0x08afcb28(0xdc);
      if (iVar3 == 0) {
        piVar6[0xc] = 0;
      }
      else {
        func_0x08adc348(iVar3);
        piVar6[0xc] = iVar3;
      }
    }
    if ((DAT_09afde50._3_1_ & 0x10) != 0) {
      iVar3 = func_0x08afcb28(0x19c);
      if (iVar3 == 0) {
        piVar6[0x12] = 0;
      }
      else {
        func_0x08aef220(iVar3);
        piVar6[0x12] = iVar3;
      }
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
    puVar8 = puVar8 + 4;
  } while (iVar7 < 2);
  func_0x08afcc18(*param_1,param_2,param_1[1]);
  func_0x08afcc18(param_1[1],param_3,*param_1);
  iVar7 = 0;
  piVar6 = param_1;
  do {
    func_0x08afcd40(*piVar6,piVar6[2]);
    func_0x08afcd40(*piVar6,piVar6[6]);
    func_0x08afcd40(*piVar6,piVar6[4]);
    func_0x08afcd40(*piVar6,piVar6[8]);
    func_0x08afcd40(*piVar6,piVar6[10]);
    func_0x08afcd40(*piVar6,piVar6[0xc]);
    func_0x08afcd40(*piVar6,piVar6[0xe]);
    func_0x08afcd40(*piVar6,piVar6[0x10]);
    func_0x08afcd40(*piVar6,piVar6[0x12]);
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar7 < 2);
  local_4c = 1;
  iVar7 = 0;
  puVar5 = &DAT_09afc900;
  piVar6 = param_1;
  do {
    uVar9 = param_2;
    uVar1 = param_3;
    if (iVar7 == 0) {
      uVar9 = param_3;
      uVar1 = param_2;
    }
    iVar2 = *piVar6;
    iVar3 = param_1[local_4c];
    func_0x08aefbb4(piVar6[4],iVar2,iVar3);
    func_0x08ae06e8(piVar6[6],(param_1 + local_4c)[6],iVar2,iVar3);
    func_0x08aebf04(piVar6[8],uVar1);
    if (piVar6[10] != 0) {
      func_0x08aed2f0(piVar6[10],uVar1);
    }
    if (piVar6[2] != 0) {
      func_0x08aece08(local_38[0x217],piVar6[2],iVar2,iVar3);
    }
    if (piVar6[0xc] != 0) {
      uVar4 = FUN_08889924(DAT_089d6a10);
      func_0x08adc378(local_38[0x218],piVar6[0xc],uVar1,uVar9,uVar4,(local_38[0x417] & 0x80) != 0,
                      (int)(char)puVar5[0x79e],(int)(char)DAT_09afde50,iVar7);
    }
    if ((piVar6[0xe] != 0) && (-1 < *(short *)(puVar10 + 3))) {
      func_0x08aeb9f4(piVar6[0xe],(int)*(short *)(puVar10 + 3),param_1);
    }
    if (piVar6[0x10] != 0) {
      func_0x08add8d0(piVar6[0x10],iVar2);
    }
    if (piVar6[0x12] != 0) {
      func_0x08aef284(piVar6[0x12],uVar1,uVar9);
    }
    iVar7 = iVar7 + 1;
    local_4c = local_4c + -1;
    local_38 = local_38 + 0x418;
    puVar5 = puVar5 + -0x1060;
    piVar6 = piVar6 + 1;
    puVar10 = puVar10 + 4;
  } while (iVar7 < 2);
  func_0x08ae3a58(param_1[6],param_1[7]);
  FUN_088900b0(param_1 + 0x1d,(int)DAT_09afde50._2_1_,param_2,param_3);
  return;
}

