/* Entry 0x08828EEC | file offset 0x00025EC4 | FUN_08828eec | bytes 536 */

void FUN_08828eec(float param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                 int param_7,code *param_8,undefined4 param_9)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  
  iVar6 = 0;
  puVar5 = (ushort *)(param_2 + 8);
  if (*(char *)(param_2 + 2) != '\0') {
    do {
      uVar4 = (uint)*(byte *)((int)puVar5 + 7);
      if (uVar4 == 0) {
        uVar4 = (uint)(byte)puVar5[3];
LAB_08828ff4:
        if (uVar4 == 0) {
          bVar1 = (byte)puVar5[4];
        }
        else {
          if (uVar4 != param_3) {
            bVar3 = false;
            goto LAB_08829094;
          }
          bVar1 = (byte)puVar5[4];
        }
        if (bVar1 == 0) {
          bVar1 = *(byte *)((int)puVar5 + 9);
        }
        else {
          if (bVar1 - 1 != param_6) {
            bVar3 = false;
            goto LAB_08829094;
          }
          bVar1 = *(byte *)((int)puVar5 + 9);
        }
        if (bVar1 == 0) {
          uVar2 = *puVar5;
        }
        else {
          if (bVar1 - 1 != param_7) {
            bVar3 = false;
            goto LAB_08829094;
          }
          uVar2 = *puVar5;
        }
        bVar3 = false;
        if ((float)uVar2 <= param_1) {
          if (puVar5[1] == 0xffff) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
            if (param_1 < (float)puVar5[1]) {
              bVar3 = true;
            }
          }
        }
      }
      else {
        if (uVar4 != 4) {
          if (uVar4 == 5) {
            if (param_4 == 2) {
              if (param_5 == 0) {
                bVar3 = false;
                goto LAB_08829094;
              }
              uVar4 = (uint)(byte)puVar5[3];
            }
            else {
              uVar4 = (uint)(byte)puVar5[3];
            }
          }
          else if (param_4 == 6) {
            if (uVar4 == 6) {
              uVar4 = (uint)(byte)puVar5[3];
            }
            else {
              if (uVar4 != 1) {
                bVar3 = false;
                goto LAB_08829094;
              }
              uVar4 = (uint)(byte)puVar5[3];
            }
          }
          else if (param_4 == 0) {
            uVar4 = (uint)(byte)puVar5[3];
          }
          else {
            if (uVar4 != param_4) {
              bVar3 = false;
              goto LAB_08829094;
            }
            uVar4 = (uint)(byte)puVar5[3];
          }
          goto LAB_08828ff4;
        }
        if (param_4 == 2) {
          if (param_5 != 1) {
            uVar4 = (uint)(byte)puVar5[3];
            goto LAB_08828ff4;
          }
          bVar3 = false;
        }
        else {
          bVar3 = false;
        }
      }
LAB_08829094:
      if (bVar3) {
        (*param_8)(puVar5,param_9);
      }
      puVar5 = puVar5 + (uint)*(byte *)((int)puVar5 + 5) * 2 + 6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)(param_2 + 2));
  }
  return;
}

