/* Entry 0x088FD928 | file offset 0x000FA900 | FUN_088fd928 | bytes 880 */

void FUN_088fd928(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined2 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int iStackX_0,char cStackX_4,char cStackX_8,int iStackX_c)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = iStackX_c;
  if (iStackX_c != 0) {
    FUN_0887e798(DAT_089d6998,iStackX_c);
  }
  puVar2 = (undefined4 *)FUN_0885c6cc(*(undefined4 *)(param_1 + 0xc),0x1118,0,0,1,0);
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 0x30) + 0xee4) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xedc) = param_7;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xee0) = param_8;
  *(uint *)(*(int *)(param_1 + 0x30) + 0xee8) = (uint)(ushort)param_5[7];
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xeec) = param_6;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1114) = 0;
  puVar4 = *(uint **)(param_1 + 0x30);
  if (cStackX_8 != '\0') {
    *puVar4 = *puVar4 | 0x10;
    puVar4 = *(uint **)(param_1 + 0x30);
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  do {
    *(undefined4 *)((int)puVar4 + iVar6 + 0xef0) = 0;
    iVar5 = iVar5 + 1;
    *(undefined2 *)(*(int *)(param_1 + 0x30) + iVar7 + 0xf64) = 0xffff;
    iVar6 = iVar6 + 4;
    iVar7 = iVar7 + 2;
    puVar4 = *(uint **)(param_1 + 0x30);
  } while (iVar5 < 0x1d);
  FUN_088d38f0(puVar4 + 0x197);
  FUN_088d3b5c(*(int *)(param_1 + 0x30) + 0xa5c,0x120);
  FUN_088d3910(*(undefined1 *)(*(int *)(param_1 + 0x30) + 0xee4),*(int *)(param_1 + 0x30) + 0x65c,
               param_5,0,1);
  iVar5 = *(int *)(param_1 + 0x30);
  if (iStackX_0 != 0) {
    FUN_088cfa94(DAT_089d7830,iStackX_0,*(undefined4 *)(iVar5 + 0x66c));
    iVar5 = *(int *)(param_1 + 0x30);
  }
  if (*(int *)(iVar5 + 0xeec) != -1) {
    uVar3 = FUN_088d0700(DAT_089d7830,*(undefined1 *)(iVar5 + 0xee4),*param_5,
                         *(int *)(iVar5 + 0xeec));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x670) = uVar3;
    FUN_0887e090(DAT_089d6998,**(undefined4 **)(*(int *)(*(int *)(param_1 + 0x30) + 0x670) + 0x10),1
                 ,0x12,0x100);
  }
  FUN_088fc364(param_1);
  FUN_088fc5f8(param_1);
  FUN_088fd4c4(param_1);
  iVar5 = FUN_088fc828(param_1);
  bVar1 = false;
  if (((**(uint **)(param_1 + 0x30) & 0x10) == 0) || (iVar5 != -1)) {
    if (iVar5 == -1) {
      FUN_088fc3f8(param_1);
      if (cStackX_4 == '\0') {
        FUN_088fc298(param_1);
        FUN_088fc0e8(param_1);
        iVar5 = *(int *)(param_1 + 0x10);
      }
      else {
        *(undefined2 *)(*(int *)(param_1 + 0x30) + 0x10) = 1;
        FUN_088fc194(param_1);
        FUN_088fcd04(param_1,0);
        iVar5 = *(int *)(param_1 + 0x10);
      }
    }
    else {
      FUN_088fc3f8(param_1);
      *(undefined2 *)(*(int *)(param_1 + 0x30) + 0x10) = 2;
      **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 0x20;
      *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xc) = 3;
      *(int *)(*(int *)(param_1 + 0x30) + 0x10a4) = iVar5;
      iVar5 = *(int *)(param_1 + 0x10);
    }
  }
  else {
    FUN_088fca30(param_1);
    bVar1 = true;
    iVar5 = *(int *)(param_1 + 0x10);
  }
  if (iVar5 != 0) {
    FUN_0887e7b4(DAT_089d6998);
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

