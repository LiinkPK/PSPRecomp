/* Entry 0x0894D3F0 | file offset 0x0014A3C8 | FUN_0894d3f0 | bytes 804 */

undefined1 * FUN_0894d3f0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int unaff_s3;
  int unaff_s4;
  int iVar12;
  int iVar13;
  int local_50;
  int local_4c;
  int local_48;
  code *local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  
  local_48 = *(int *)(param_3 + 0x18);
  if (*(ushort *)(param_4 + 6) == 0) {
    puVar2 = (undefined1 *)0xffffffff;
  }
  else {
    local_40 = param_3;
    local_3c = param_5;
    local_38 = param_3;
    puVar2 = (undefined1 *)
             FUN_08971134(*(undefined4 *)(param_2 + 0x18),(uint)*(ushort *)(param_4 + 6) * 4 + 0x34,
                          &local_50,1);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0xfffffffe;
    }
    else {
      iVar3 = param_2 + (uint)*(ushort *)(local_48 + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) + local_50;
      *(undefined1 **)(puVar2 + 0x30) = puVar2 + 0x34;
      iVar13 = 0;
      iVar3 = 0;
      if (*(short *)(param_4 + 6) != 0) {
        iVar11 = 0;
        iVar12 = 0;
        local_44 = FUN_08970cdc;
        do {
          iVar4 = 0;
          if (*(ushort *)(local_48 + 0x1c) != 0) {
            piVar7 = *(int **)(local_48 + 0x28);
            do {
              iVar8 = *piVar7;
              iVar6 = 0;
              if (*(ushort *)(iVar8 + 6) != 0) {
                puVar10 = *(undefined4 **)(iVar8 + 8);
                iVar9 = 0;
                do {
                  if (*(int *)*puVar10 == *(int *)(*(int *)(param_4 + 8) + iVar11)) {
                    unaff_s3 = *(int *)(*(int *)(iVar8 + 8) + iVar9);
                    unaff_s4 = iVar8;
                    goto LAB_0894d55c;
                  }
                  iVar6 = iVar6 + 1;
                  iVar9 = iVar9 + 4;
                  puVar10 = puVar10 + 1;
                } while (iVar6 < (int)(uint)*(ushort *)(iVar8 + 6));
              }
              iVar4 = iVar4 + 1;
              piVar7 = piVar7 + 1;
            } while (iVar4 < (int)(uint)*(ushort *)(local_48 + 0x1c));
          }
LAB_0894d55c:
          if ((unaff_s3 == 0) ||
             (local_4c = iVar3,
             iVar4 = FUN_08945bec(param_1,param_2,local_40,*(undefined2 *)(unaff_s4 + 4),unaff_s3,
                                  local_3c), iVar3 = local_4c, iVar4 < 0)) {
            iVar13 = 0;
            local_4c = iVar3;
            if (0 < iVar3) {
              iVar11 = 0;
              do {
                FUN_089446f0(param_2,*(undefined4 *)(*(int *)(puVar2 + 0x30) + iVar11),0);
                iVar13 = iVar13 + 1;
                iVar11 = iVar11 + 4;
              } while (iVar13 < iVar3);
            }
            uVar1 = *(ushort *)(local_48 + 0x18);
            iVar3 = FUN_08971010(*(undefined4 *)(param_2 + 0x18),puVar2);
            param_2 = param_2 + (uint)uVar1 * 4;
            *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar3;
            return (undefined1 *)0xfffffffd;
          }
          *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | 0x100;
          FUN_0894be60(param_2,iVar4,local_44,puVar2);
          *(int *)(*(int *)(puVar2 + 0x30) + iVar12) = iVar4;
          iVar13 = iVar13 + 1;
          iVar3 = local_4c + 1;
          iVar12 = iVar12 + 4;
          iVar11 = iVar11 + 4;
        } while (iVar13 < (int)(uint)*(ushort *)(param_4 + 6));
      }
      if (*(int *)(param_2 + 0x78) == 0) {
        *(undefined1 **)(param_2 + 0x7c) = puVar2;
        *(undefined1 **)(param_2 + 0x78) = puVar2;
        *(undefined4 *)(puVar2 + 8) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        iVar13 = *(int *)(param_2 + 0x80);
      }
      else {
        *(undefined1 **)(*(int *)(param_2 + 0x7c) + 0xc) = puVar2;
        uVar5 = *(undefined4 *)(param_2 + 0x7c);
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 8) = uVar5;
        iVar13 = *(int *)(param_2 + 0x80);
        *(undefined1 **)(param_2 + 0x7c) = puVar2;
      }
      *(int *)(param_2 + 0x80) = iVar13 + 1;
      *puVar2 = 0x6c;
      *(int *)(puVar2 + 0x1c) = local_38;
      *(int *)(puVar2 + 0x20) = local_48;
      *(int *)(puVar2 + 0x24) = param_4;
      *(undefined2 *)(puVar2 + 2) = 0;
      *(short *)(puVar2 + 4) = (short)iVar3;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x14) = 0;
      *(undefined2 *)(puVar2 + 0x18) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
    }
  }
  return puVar2;
}

