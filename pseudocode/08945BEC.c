/* Entry 0x08945BEC | file offset 0x00142BC4 | FUN_08945bec | bytes 1600 */

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_08945bec(float param_1,int param_2,int param_3,int param_4,undefined4 *param_5,uint *param_6)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  int local_100 [7];
  undefined1 local_e4;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  int *local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  
  iVar10 = *(int *)(param_3 + 0x18);
  DAT_09b6f478 = param_2;
  iVar4 = FUN_089434d8(param_2,*(undefined4 *)(param_3 + 0x18));
  if (iVar4 == 0) {
    FUN_08946f90(param_2,*param_5,0xfffffffa);
    puVar5 = (undefined1 *)0xfffffffa;
  }
  else {
    puVar12 = *(undefined4 **)(*(int *)(iVar10 + 0x2c) + param_4 * 4);
    local_44 = param_3;
    local_3c = param_4;
    iVar4 = FUN_089453f4(param_2,*(undefined4 *)(param_3 + 0x18),puVar12);
    if (iVar4 == 0) {
      FUN_08946f90(param_2,*param_5,0xfffffffa);
      puVar5 = (undefined1 *)0xfffffffa;
    }
    else if (param_1 < (float)(int)puVar12[1]) {
      iVar4 = 0;
      local_38 = 0;
      iVar11 = 0x1ec;
      if ((param_6 != (uint *)0x0) && ((*param_6 & 0x40) != 0)) {
        local_38 = 1;
        iVar4 = 0x1ec;
        iVar11 = (uint)*(ushort *)(puVar12 + 5) * 4 + 0x1ec;
      }
      puVar5 = (undefined1 *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar11,local_100,1);
      if (puVar5 == (undefined1 *)0x0) {
        FUN_08946f90(param_2,*param_5,0xfffffffb);
        puVar5 = (undefined1 *)0xfffffffb;
      }
      else {
        iVar11 = param_2 + (uint)*(ushort *)(iVar10 + 0x18) * 4;
        *(int *)(iVar11 + 0xb4) = *(int *)(iVar11 + 0xb4) + local_100[0];
        local_40 = iVar10;
        if (local_38 == 0) {
          *(undefined4 *)(puVar5 + 0x1e4) = 0;
          iVar4 = *(int *)(param_2 + 0x70);
        }
        else {
          *(undefined1 **)(puVar5 + 0x1e4) = puVar5 + iVar4;
          iVar4 = 0;
          if (*(short *)(puVar12 + 5) != 0) {
            iVar11 = 0;
            iVar10 = 0;
            do {
              if ((*(uint *)(&DAT_089d9340 + (uint)*(ushort *)(puVar12[9] + iVar11) * 4) & 8) == 0)
              {
                *(undefined4 *)(*(int *)(puVar5 + 0x1e4) + iVar10) = 0;
                uVar3 = *(ushort *)(puVar12 + 5);
              }
              else {
                uVar7 = (*(code *)param_6[10])((uint)*(ushort *)(puVar12[9] + iVar11),param_6);
                *(undefined4 *)(*(int *)(puVar5 + 0x1e4) + iVar10) = uVar7;
                uVar3 = *(ushort *)(puVar12 + 5);
              }
              iVar4 = iVar4 + 1;
              iVar11 = iVar11 + 2;
              iVar10 = iVar10 + 4;
            } while (iVar4 < (int)(uint)uVar3);
          }
          iVar4 = *(int *)(param_2 + 0x70);
        }
        *(int *)(param_2 + 0x70) = iVar4 + 1;
        *puVar5 = 0x65;
        puVar5[1] = 0;
        *(undefined2 *)(puVar5 + 2) = 0;
        *(short *)(puVar5 + 4) = (short)*puVar12;
        *(short *)(puVar5 + 8) = (short)local_3c;
        *(undefined2 *)(puVar5 + 0xe) = 0;
        *(undefined2 *)(puVar5 + 0xc) = 0;
        *(undefined2 *)(puVar5 + 10) = 0;
        *(undefined4 *)(puVar5 + 0x178) = 0;
        *(undefined4 *)(puVar5 + 0x17c) = 0;
        *(undefined4 *)(puVar5 + 0x180) = 0;
        *(undefined2 *)(puVar5 + 0x186) = 0;
        *(undefined2 *)(puVar5 + 0x184) = 0;
        *(undefined4 *)(puVar5 + 0x188) = 0;
        *(undefined4 *)(puVar5 + 0x18c) = 0;
        if (*(char *)(param_5 + 2) == '\x01') {
          piVar6 = (int *)param_5[3];
          if (piVar6 != (int *)0x0) {
            *(short *)(puVar5 + 0x184) = (short)piVar6[1];
            *(int *)(puVar5 + 0x188) = piVar6[2];
            *(uint *)(puVar5 + 0x18c) = *piVar6 << 0x10 | (uint)*(ushort *)(param_5 + 1);
          }
        }
        else if ((*(char *)(param_5 + 2) == '\x02') &&
                (piVar6 = (int *)param_5[3], piVar6 != (int *)0x0)) {
          *(short *)(puVar5 + 0x184) = (short)piVar6[1];
          *(int *)(puVar5 + 0x188) = piVar6[2];
          *(uint *)(puVar5 + 0x18c) = *piVar6 << 0x10 | (uint)*(ushort *)(param_5 + 1);
        }
        *(undefined2 *)(puVar5 + 400) = 0;
        *(undefined2 *)(puVar5 + 0x192) = 0;
        *(undefined4 *)(puVar5 + 0x198) = 0;
        *(undefined4 *)(puVar5 + 0x194) = 0;
        if (param_5 == (undefined4 *)0x0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = -(float)*(ushort *)(param_5 + 0x24);
        }
        *(float *)(puVar5 + 0x15c) = fVar13;
        *(undefined4 *)(puVar5 + 0x160) = 0;
        *(undefined4 *)(puVar5 + 0x164) = 0;
        *(undefined4 *)(puVar5 + 0x168) = 0xbf800000;
        uVar7 = puVar12[1];
        *(undefined4 *)(puVar5 + 0x170) = 0;
        *(undefined4 *)(puVar5 + 0x1a8) = uVar7;
        *(undefined4 *)(puVar5 + 0x174) = 0;
        *(undefined2 *)(puVar5 + 0x1b0) = 0x8000;
        iVar4 = 0;
        puVar8 = puVar5;
        puVar9 = puVar5;
        do {
          *(undefined2 *)(puVar8 + 0x1b2) = 0;
          *(undefined4 *)(puVar9 + 0x1c0) = 0;
          *(undefined4 *)(puVar9 + 0x1b8) = 0;
          iVar4 = iVar4 + 1;
          puVar8 = puVar8 + 2;
          puVar9 = puVar9 + 4;
        } while (iVar4 < 2);
        *(int *)(puVar5 + 0x1ac) = local_44;
        *(int *)(puVar5 + 0x1c8) = local_40;
        *(undefined4 **)(puVar5 + 0x1cc) = puVar12;
        *(undefined4 **)(puVar5 + 0x1d0) = param_5;
        *(undefined2 *)(puVar5 + 0x1d4) = 0;
        *(ushort *)(puVar5 + 0x1e0) = (ushort)*(byte *)((int)param_5 + 7);
        bVar2 = *(byte *)((int)param_5 + 0x8e);
        *(undefined4 *)(puVar5 + 0x19c) = 0;
        *(ushort *)(puVar5 + 0x1e2) = (ushort)bVar2;
        *(undefined4 *)(puVar5 + 0x1e8) = 0;
        local_100[5] = 0x3013f;
        local_e4 = 0;
        local_dc = &local_b4;
        local_ac = 0;
        local_b0 = 0;
        local_b4 = 0;
        local_d8 = &local_a4;
        local_9c = 0;
        local_a0 = 0;
        local_a4 = 0;
        local_d4 = &local_94;
        local_8c = 0x3f800000;
        local_90 = 0x3f800000;
        local_94 = 0x3f800000;
        local_d0 = local_100 + 1;
        local_100[4] = 0x3f800000;
        local_100[3] = 0x3f800000;
        local_100[2] = 0x3f800000;
        local_100[1] = 0x3f800000;
        local_84 = 0x3f800000;
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0x3f800000;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0x3f800000;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0x3f800000;
        local_cc = &local_84;
        local_c8 = local_cc;
        FUN_08944930(param_2,puVar5,local_100 + 5);
        if (param_6 != (uint *)0x0) {
          FUN_08944930(param_2,puVar5,param_6);
        }
        *(undefined4 *)(puVar5 + 0x16c) = 0x3f800000;
        if (*(int *)(param_2 + 0x68) == 0) {
          *(undefined1 **)(param_2 + 0x6c) = puVar5;
          *(undefined1 **)(param_2 + 0x68) = puVar5;
          *(undefined4 *)(puVar5 + 0x150) = 0;
          *(undefined4 *)(puVar5 + 0x154) = 0;
          cVar1 = *(char *)(param_2 + 0x94);
        }
        else {
          *(undefined1 **)(*(int *)(param_2 + 0x6c) + 0x154) = puVar5;
          uVar7 = *(undefined4 *)(param_2 + 0x6c);
          *(undefined4 *)(puVar5 + 0x154) = 0;
          *(undefined4 *)(puVar5 + 0x150) = uVar7;
          *(undefined1 **)(param_2 + 0x6c) = puVar5;
          cVar1 = *(char *)(param_2 + 0x94);
        }
        param_1 = param_1 + 1.0;
        switch(cVar1) {
        case '\0':
          *(float *)(puVar5 + 0x15c) = *(float *)(puVar5 + 0x15c) - *(float *)(param_2 + 0x10);
          break;
        case '\x01':
          *(float *)(puVar5 + 0x15c) = *(float *)(puVar5 + 0x15c) - 1.0;
          FUN_0894b48c(param_1,param_2,puVar5);
          break;
        case '\x05':
          *(float *)(puVar5 + 0x15c) = *(float *)(puVar5 + 0x15c) - 1.0;
          FUN_0894b48c(param_1,param_2,puVar5);
          FUN_0894a5b0(param_2,puVar5);
          break;
        case '\t':
          *(float *)(puVar5 + 0x15c) = *(float *)(puVar5 + 0x15c) - 1.0;
          FUN_0894b48c(param_1,param_2,puVar5);
          FUN_0894a5b0(param_2,puVar5);
          FUN_0894622c(param_2,puVar5);
          FUN_0894a674(param_2,puVar5);
        }
        *(char *)(param_2 + 0x94) = cVar1;
      }
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
  }
  return puVar5;
}

