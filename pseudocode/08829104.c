/* Entry 0x08829104 | file offset 0x000260DC | FUN_08829104 | bytes 576 */

void FUN_08829104(float param_1,float param_2,int param_3,uint param_4,uint param_5,int param_6,
                 int param_7,int param_8,code *param_9,undefined4 param_10)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = 0;
  puVar5 = (ushort *)(param_3 + (uint)*(ushort *)(param_3 + 4));
  if (*(char *)(param_3 + 3) != '\0') {
    do {
      uVar4 = (uint)*(byte *)((int)puVar5 + 5);
      if (uVar4 == 0) {
        uVar4 = (uint)(byte)puVar5[2];
LAB_08829220:
        if (uVar4 == 0) {
          bVar1 = (byte)puVar5[3];
        }
        else {
          if (uVar4 != param_4) {
            bVar3 = false;
            goto LAB_088292cc;
          }
          bVar1 = (byte)puVar5[3];
        }
        if (bVar1 == 0) {
          bVar1 = *(byte *)((int)puVar5 + 7);
        }
        else {
          if (bVar1 - 1 != param_7) {
            bVar3 = false;
            goto LAB_088292cc;
          }
          bVar1 = *(byte *)((int)puVar5 + 7);
        }
        if (bVar1 == 0) {
          uVar2 = *puVar5;
        }
        else {
          if (bVar1 - 1 != param_8) {
            bVar3 = false;
            goto LAB_088292cc;
          }
          uVar2 = *puVar5;
        }
        fVar7 = (float)uVar2;
        if ((fVar7 <= param_1) || (param_2 < fVar7)) {
          if (param_2 < 0.0) {
            bVar3 = false;
            if (fVar7 == param_1) goto LAB_088292c8;
          }
          else {
            bVar3 = false;
          }
        }
        else {
LAB_088292c8:
          bVar3 = true;
        }
      }
      else {
        if (uVar4 != 4) {
          if (uVar4 == 5) {
            if (param_5 == 2) {
              if (param_6 == 0) {
                bVar3 = false;
                goto LAB_088292cc;
              }
              uVar4 = (uint)(byte)puVar5[2];
            }
            else {
              uVar4 = (uint)(byte)puVar5[2];
            }
          }
          else if (param_5 == 6) {
            if (uVar4 == 6) {
              uVar4 = (uint)(byte)puVar5[2];
            }
            else {
              if (uVar4 != 1) {
                bVar3 = false;
                goto LAB_088292cc;
              }
              uVar4 = (uint)(byte)puVar5[2];
            }
          }
          else if (param_5 == 0) {
            uVar4 = (uint)(byte)puVar5[2];
          }
          else {
            if (uVar4 != param_5) {
              bVar3 = false;
              goto LAB_088292cc;
            }
            uVar4 = (uint)(byte)puVar5[2];
          }
          goto LAB_08829220;
        }
        if (param_5 == 2) {
          if (param_6 != 1) {
            uVar4 = (uint)(byte)puVar5[2];
            goto LAB_08829220;
          }
          bVar3 = false;
        }
        else {
          bVar3 = false;
        }
      }
LAB_088292cc:
      if (bVar3) {
        (*param_9)(puVar5,param_10);
      }
      puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 3) * 2 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)(param_3 + 3));
  }
  return;
}

