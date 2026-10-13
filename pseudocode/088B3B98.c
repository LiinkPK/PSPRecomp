/* Entry 0x088B3B98 | file offset 0x000B0B70 | FUN_088b3b98 | bytes 612 */

/* WARNING: Removing unreachable block (ram,0x088b3cc4) */

void FUN_088b3b98(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,uint param_7,undefined4 param_8,int iStackX_0,undefined4 uStackX_4,
                 undefined1 uStackX_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 auStack_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_34 = uStackX_4;
  piVar3 = (int *)(DAT_089d7304 + param_5 * 0x14);
  local_30 = param_8;
  iVar1 = sceKernelGetSystemTimeLow();
  local_38 = iVar1 * 0x343fd + 0x269ec3;
  iVar1 = (int)(local_38 >> 0x10 & 0x7fffU) % ((piVar3[1] - *piVar3) + 1) + *piVar3;
  if ((param_6 < 1) && (param_6 = iStackX_0 + *(short *)((int)piVar3 + 10), param_6 < 1)) {
    param_6 = 1;
  }
  if (param_6 < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = param_6;
    if (100 < param_6) {
      iVar2 = 100;
    }
  }
  if (param_7 == 0xffffffff) {
    local_38 = local_38 * 0x343fd + 0x269ec3;
    param_7 = local_38 >> 0x10 & 7;
  }
  FUN_088cba10(param_3);
  FUN_088cba54(param_3,param_4);
  *(char *)(param_3 + 1) = (char)param_6;
  local_2c = param_6;
  FUN_088cbddc(param_3);
  FUN_088cba74(param_3,iVar1);
  iVar5 = param_3 + 0x10;
  iVar4 = iVar5 + *(char *)(param_3 + 0x773) * 0xc6;
  FUN_088b3dfc(&uStack_40,iVar5,param_4,iVar2,param_7,(int)(short)piVar3[3],uStackX_8);
  FUN_088b446c(&uStack_3f,iVar4,param_4,iVar2,param_7,(int)(short)piVar3[2],uStackX_8);
  FUN_088b5e34(&uStack_3e,iVar5,iVar2,param_7,(int)(short)piVar3[2],uStackX_8);
  FUN_088b4d48(&uStack_3d,iVar4,iVar1,param_7,local_30,(int)*(short *)((int)piVar3 + 0xe),uStackX_8)
  ;
  FUN_088b4f9c(auStack_3c,iVar4,param_4,param_7,(int)(short)piVar3[4],local_34);
  *param_2 = local_2c;
  param_2[1] = param_7;
  param_2[2] = iVar1;
  return;
}

