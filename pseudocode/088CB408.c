/* Entry 0x088CB408 | file offset 0x000C83E0 | FUN_088cb408 | bytes 496 */

void FUN_088cb408(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ushort local_c0;
  ushort local_be [80];
  ushort local_1e;
  
  puVar7 = &local_c0;
  iVar3 = FUN_088cb7e8(param_4);
  *param_2 = 0xffff;
  param_2[1] = 0xffff;
  param_2[2] = 0;
  param_2[0x99] = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_088cb164(param_3,param_5);
    cVar1 = *(char *)(iVar3 + 8);
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        iVar6 = (int)*(char *)(iVar4 + 0x775) + (int)*(short *)(iVar3 + 10);
        if (10 < iVar6) {
          iVar6 = 10;
        }
        *(char *)(iVar4 + 0x775) = (char)iVar6;
        param_2[0x99] = *(ushort *)(iVar3 + 10);
      }
    }
    else if (cVar1 < '\x02') {
      FUN_088b7ed4(iVar4 + 0x10,(int)*(short *)(iVar3 + 10));
      *(uint *)(DAT_089d726c + 4) = *(uint *)(DAT_089d726c + 4) | 0x80000000;
      param_2[3] = *(ushort *)(iVar3 + 10);
      param_2[2] = 1;
    }
    else if (cVar1 < '\x03') {
      pcVar5 = (char *)FUN_088cb164(param_3,param_5);
      iVar3 = (int)*(short *)(iVar3 + 10);
      bVar2 = pcVar5[1];
      uVar9 = (uint)bVar2;
      if (((0 < iVar3) && (uVar9 < 100)) || ((iVar3 < 0 && (1 < uVar9)))) {
        iVar3 = uVar9 + iVar3;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        else if (100 < iVar3) {
          iVar3 = 100;
        }
        pcVar5[1] = (char)iVar3;
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        if ((int)uVar9 < iVar3) {
          FUN_088cbd24(pcVar5,uVar9,iVar3);
          FUN_088b6f48(&local_c0,(int)*pcVar5,uVar9,iVar3);
          iVar4 = 0;
          puVar8 = param_2;
          if (0 < (short)local_c0) {
            do {
              iVar4 = iVar4 + 1;
              puVar8[3] = *(ushort *)((int)puVar7 + 2);
              puVar7 = (ushort *)((int)puVar7 + 2);
              puVar8 = puVar8 + 1;
            } while (iVar4 < (short)local_c0);
          }
          param_2[2] = local_c0;
          param_2[0x99] = local_1e;
        }
        *param_2 = (ushort)bVar2;
        param_2[1] = (ushort)iVar3;
      }
    }
  }
  return;
}

