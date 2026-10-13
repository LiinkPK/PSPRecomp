/* Entry 0x0882E764 | file offset 0x0002B73C | FUN_0882e764 | bytes 1124 */

undefined4
FUN_0882e764(float param_1,float param_2,int param_3,uint param_4,int param_5,int param_6,
            int param_7,char param_8,char param_9)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = *(float *)(param_7 + 0x78);
  iVar6 = 0;
  cVar1 = *(char *)(*(int *)(param_7 + 0x4c) + 4);
  puVar5 = (ushort *)(param_3 + 8);
  if (*(byte *)(param_3 + 2) != 0) {
    do {
      uVar4 = (uint)*(byte *)((int)puVar5 + 7);
      if (uVar4 == 0) goto LAB_0882e8e0;
      if (uVar4 == 4) {
        if (param_4 == 2) {
          if (param_5 != 1) goto LAB_0882e8e0;
          puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
        }
        else {
          puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
        }
      }
      else if (uVar4 == 5) {
        if ((param_4 != 2) || (param_5 != 0)) goto LAB_0882e8e0;
        puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
      }
      else if (param_4 == 6) {
        if ((uVar4 == 6) || (uVar4 == 1)) {
LAB_0882e8e0:
          cVar3 = (char)puVar5[2];
          if (param_8 == '\x01') {
            uVar7 = puVar5[1];
          }
          else {
            uVar7 = *puVar5;
          }
          fVar8 = (float)uVar7;
          if ((((cVar3 != '\0') && (cVar3 != 'C')) && (cVar3 != '[')) || (param_1 + fVar8 <= fVar9))
          {
            if ((((((cVar3 == '\x01') || (cVar3 == 'g')) ||
                  ((cVar3 == 'x' || ((cVar3 == 'y' || (cVar3 == ':')))))) || (cVar3 == '6')) ||
                (cVar3 == '7')) && ((fVar9 < fVar8 && (param_9 == '\0')))) {
              cVar3 = (char)puVar5[3];
              goto LAB_0882e9a8;
            }
            if ((cVar3 == '$') && (fVar9 < fVar8 + param_2)) {
              cVar3 = (char)puVar5[3];
              goto LAB_0882e9a8;
            }
          }
          else {
            cVar3 = (char)puVar5[3];
LAB_0882e9a8:
            if (cVar3 == '\0') {
              bVar2 = (byte)puVar5[4];
            }
            else {
              if (cVar3 != cVar1) goto LAB_0882e9d4;
              bVar2 = (byte)puVar5[4];
            }
            if ((bVar2 == 0) || (bVar2 - 1 == param_6)) {
              return 0;
            }
          }
LAB_0882e9d4:
          puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
        }
        else {
          puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
        }
      }
      else {
        if ((param_4 == 0) || (uVar4 == param_4)) goto LAB_0882e8e0;
        puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)(param_3 + 2));
  }
  iVar6 = 0;
  puVar5 = (ushort *)(param_3 + (uint)*(ushort *)(param_3 + 4));
  if (*(byte *)(param_3 + 3) != 0) {
    do {
      uVar4 = (uint)*(byte *)((int)puVar5 + 5);
      if (uVar4 == 0) {
LAB_0882ead0:
        cVar3 = (char)puVar5[1];
        if (cVar3 == '\b') {
          uVar7 = *puVar5;
LAB_0882eae8:
          if ((float)uVar7 + param_1 <= fVar9) goto LAB_0882eb04;
          cVar3 = (char)puVar5[2];
        }
        else {
          if (cVar3 == '1') {
            uVar7 = *puVar5;
            goto LAB_0882eae8;
          }
LAB_0882eb04:
          if (cVar3 == '\x04') {
            uVar7 = *puVar5;
          }
          else if (cVar3 == '3') {
            uVar7 = *puVar5;
          }
          else if (cVar3 == '-') {
            uVar7 = *puVar5;
          }
          else {
            if (cVar3 != ')') goto LAB_0882eb6c;
            uVar7 = *puVar5;
          }
          if ((float)uVar7 + param_2 <= fVar9) goto LAB_0882eb6c;
          cVar3 = (char)puVar5[2];
        }
        if (cVar3 == '\0') {
          bVar2 = (byte)puVar5[3];
        }
        else {
          if (cVar3 != cVar1) goto LAB_0882eb6c;
          bVar2 = (byte)puVar5[3];
        }
        if ((bVar2 == 0) || (bVar2 - 1 == param_6)) {
          return 0;
        }
      }
      else if (uVar4 == 4) {
        if ((param_4 == 2) && (param_5 != 1)) goto LAB_0882ead0;
      }
      else if (uVar4 == 5) {
        if ((param_4 != 2) || (param_5 != 0)) goto LAB_0882ead0;
      }
      else if (param_4 == 6) {
        if ((uVar4 == 6) || (uVar4 == 1)) goto LAB_0882ead0;
      }
      else if ((param_4 == 0) || (uVar4 == param_4)) goto LAB_0882ead0;
LAB_0882eb6c:
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 3) * 2 + 4;
    } while (iVar6 < (int)(uint)*(byte *)(param_3 + 3));
  }
  return 1;
}

