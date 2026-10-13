/* Entry 0x0882EBC8 | file offset 0x0002BBA0 | FUN_0882ebc8 | bytes 828 */

undefined4 FUN_0882ebc8(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  float fVar9;
  
  fVar9 = *(float *)(param_5 + 0x78);
  cVar1 = *(char *)(*(int *)(param_5 + 0x4c) + 4);
  iVar7 = 0;
  iVar6 = param_1 + 8;
  if (*(byte *)(param_1 + 2) != 0) {
    do {
      uVar4 = (uint)*(byte *)(iVar6 + 7);
      if (uVar4 == 0) {
LAB_0882eca4:
        cVar2 = *(char *)(iVar6 + 4);
        if (cVar2 == '\0') {
          uVar8 = *(ushort *)(iVar6 + 2);
LAB_0882ecc4:
          if (fVar9 < (float)uVar8) goto LAB_0882ecdc;
          cVar2 = *(char *)(iVar6 + 6);
        }
        else {
          if (cVar2 == 'C') {
            uVar8 = *(ushort *)(iVar6 + 2);
            goto LAB_0882ecc4;
          }
          if (cVar2 == '[') {
            uVar8 = *(ushort *)(iVar6 + 2);
            goto LAB_0882ecc4;
          }
LAB_0882ecdc:
          if ((cVar2 != '$') || (fVar9 < (float)*(ushort *)(iVar6 + 2))) goto LAB_0882ed28;
          cVar2 = *(char *)(iVar6 + 6);
        }
        if (cVar2 == '\0') {
          bVar3 = *(byte *)(iVar6 + 8);
        }
        else {
          if (cVar2 != cVar1) goto LAB_0882ed28;
          bVar3 = *(byte *)(iVar6 + 8);
        }
        if ((bVar3 == 0) || (bVar3 - 1 == param_4)) {
          return 1;
        }
      }
      else if (uVar4 == 4) {
        if ((param_2 == 2) && (param_3 != 1)) goto LAB_0882eca4;
      }
      else if (uVar4 == 5) {
        if ((param_2 != 2) || (param_3 != 0)) goto LAB_0882eca4;
      }
      else if (param_2 == 6) {
        if ((uVar4 == 6) || (uVar4 == 1)) goto LAB_0882eca4;
      }
      else if ((param_2 == 0) || (uVar4 == param_2)) goto LAB_0882eca4;
LAB_0882ed28:
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc + (uint)*(byte *)(iVar6 + 5) * 4;
    } while (iVar7 < (int)(uint)*(byte *)(param_1 + 2));
  }
  iVar6 = 0;
  puVar5 = (ushort *)(param_1 + (uint)*(ushort *)(param_1 + 4));
  if (*(byte *)(param_1 + 3) != 0) {
    do {
      uVar4 = (uint)*(byte *)((int)puVar5 + 5);
      if (uVar4 == 0) {
LAB_0882ee28:
        cVar2 = (char)puVar5[1];
        if (cVar2 == '\b') {
          uVar8 = *puVar5;
LAB_0882ee40:
          if (fVar9 < (float)uVar8) goto LAB_0882ee58;
          cVar2 = (char)puVar5[2];
        }
        else {
          if (cVar2 == '1') {
            uVar8 = *puVar5;
            goto LAB_0882ee40;
          }
LAB_0882ee58:
          if (cVar2 == '\x04') {
            uVar8 = *puVar5;
          }
          else if (cVar2 == '3') {
            uVar8 = *puVar5;
          }
          else if (cVar2 == '-') {
            uVar8 = *puVar5;
          }
          else {
            if (cVar2 != ')') goto LAB_0882eebc;
            uVar8 = *puVar5;
          }
          if (fVar9 < (float)uVar8) goto LAB_0882eebc;
          cVar2 = (char)puVar5[2];
        }
        if (cVar2 == '\0') {
          bVar3 = (byte)puVar5[3];
        }
        else {
          if (cVar2 != cVar1) goto LAB_0882eebc;
          bVar3 = (byte)puVar5[3];
        }
        if ((bVar3 == 0) || (bVar3 - 1 == param_4)) {
          return 1;
        }
      }
      else if (uVar4 == 4) {
        if ((param_2 == 2) && (param_3 != 1)) goto LAB_0882ee28;
      }
      else if (uVar4 == 5) {
        if ((param_2 != 2) || (param_3 != 0)) goto LAB_0882ee28;
      }
      else if (param_2 == 6) {
        if ((uVar4 == 6) || (uVar4 == 1)) goto LAB_0882ee28;
      }
      else if ((param_2 == 0) || (uVar4 == param_2)) goto LAB_0882ee28;
LAB_0882eebc:
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 3) * 2 + 4;
    } while (iVar6 < (int)(uint)*(byte *)(param_1 + 3));
  }
  return 0;
}

