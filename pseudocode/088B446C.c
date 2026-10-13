/* Entry 0x088B446C | file offset 0x000B1444 | FUN_088b446c | bytes 728 */

void FUN_088b446c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_890;
  int local_88c [64];
  undefined1 auStack_78c [1891];
  char local_29;
  
  piVar5 = &local_890;
  local_890 = sceKernelGetSystemTimeLow();
  iVar6 = -1;
  uVar7 = 0;
  FUN_088b745c(param_2);
  iVar2 = 0;
  if (0 < *(int *)(DAT_089d7314 + 8)) {
    psVar4 = DAT_089d7318;
    do {
      if (((((psVar4[1] == param_6) && (psVar4[2] <= param_4)) && (param_4 <= psVar4[3])) &&
          (((*(uint *)(psVar4 + 6) & 1 << (param_5 & 0x1f)) != 0 &&
           ((*(uint *)(psVar4 + 8) & 1 << (param_3 & 0x1f)) != 0)))) &&
         (local_890 = local_890 * 0x343fd + 0x269ec3,
         (int)((local_890 >> 0x10 & 0x7fffU) % 100) < (int)psVar4[4])) {
        iVar6 = (int)*psVar4;
        uVar7 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      psVar4 = psVar4 + 10;
    } while (iVar2 < *(int *)(DAT_089d7314 + 8));
  }
  if (iVar6 == -1) {
    iVar1 = *(int *)(DAT_089d7314 + 0xc);
    iVar3 = 0;
    iVar2 = 0;
    if (0 < iVar1) {
      psVar4 = DAT_089d731c;
      do {
        if ((psVar4[1] == param_6) && ((*(uint *)(psVar4 + 6) & 1 << (param_5 & 0x1f)) != 0)) {
          if (0x3f < iVar2) break;
          iVar2 = iVar2 + 1;
          *(int *)((int)piVar5 + 4) = (int)*psVar4;
          piVar5 = (int *)((int)piVar5 + 4);
        }
        iVar3 = iVar3 + 1;
        psVar4 = psVar4 + 10;
      } while (iVar3 < iVar1);
    }
    if (iVar2 != 0) {
      local_890 = local_890 * 0x343fd + 0x269ec3;
      iVar6 = local_88c[(int)(local_890 >> 0x10 & 0x7fffU) % iVar2];
    }
  }
  if ((iVar6 != -1) && (iVar2 = FUN_088bcad0(iVar6,param_3,param_4,uVar7,0xffffffff), iVar2 != 0)) {
    FUN_088b7e30(auStack_78c);
    FUN_088bc58c(iVar2,auStack_78c);
    iVar2 = 0;
    do {
      uVar7 = FUN_088b7b18(auStack_78c + local_29 * 0xc6,iVar2);
      FUN_088b765c(param_2,iVar2,uVar7);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  return;
}

