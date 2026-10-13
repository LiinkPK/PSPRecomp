/* Entry 0x089B81B4 | file offset 0x001B518C | FUN_089b81b4 | bytes 504 */

void FUN_089b81b4(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                 undefined1 (*param_5) [16],int param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_V14;
  undefined4 in_V18;
  undefined4 in_V1C;
  
  if ((param_2 != 0) && (param_5 != (undefined1 (*) [16])0x0)) {
    if (param_3 - 0x82U < 7) {
      pbVar6 = (byte *)((int)&DAT_089d21e0 + param_3 * 2);
      iVar5 = FUN_089b0c0c(param_2,param_3,0);
      if (iVar5 == 0) {
        if (*(char *)((int)&DAT_089d21e0 + param_3 * 2 + 1) == '\0') {
          iVar5 = FUN_089b16d0(param_2,param_3);
        }
        else {
          iVar5 = FUN_089b0c0c(param_2,0x82,0);
        }
        if (iVar5 == 0) {
          return;
        }
        bVar1 = *pbVar6;
      }
      else {
        bVar1 = *pbVar6;
      }
      uVar7 = *(undefined4 *)*param_5;
      uVar8 = *(undefined4 *)(*param_5 + 4);
      uVar9 = *(undefined4 *)(*param_5 + 8);
      uVar10 = *(undefined4 *)(*param_5 + 0xc);
      if (param_6 == 1) {
        vpfxs(5,5,5,0);
        auVar2 = vmov_q(*param_5);
        uVar7 = auVar2._0_4_;
        uVar8 = auVar2._4_4_;
        uVar9 = auVar2._8_4_;
        uVar10 = auVar2._12_4_;
      }
      uVar11 = vuc2i_s(*(undefined4 *)((uint)bVar1 + iVar5));
      auVar2._12_4_ = in_V1C;
      auVar2._8_4_ = in_V18;
      auVar2._4_4_ = in_V14;
      auVar2._0_4_ = uVar11;
      auVar3 = vi2f_q(auVar2,0x1f);
      auVar4._12_4_ = uVar10;
      auVar4._8_4_ = uVar9;
      auVar4._4_4_ = uVar8;
      auVar4._0_4_ = uVar7;
      auVar2 = vmov_q(auVar4);
      auVar2 = vsub_q(auVar2,auVar3);
      auVar2 = vscl_q(auVar2,param_1);
      auVar2 = vadd_q(auVar3,auVar2);
      auVar2 = vsat0_q(auVar2);
      uVar7 = viim_s(0xff);
      auVar2 = vscl_q(auVar2,uVar7);
      auVar2 = vf2iz_q(auVar2,0x17);
      uVar7 = vi2uc_q(auVar2);
      *(undefined4 *)((uint)bVar1 + iVar5) = uVar7;
      if (param_3 == 0x82) {
        FUN_089b81b4(param_1,param_2,0x85,param_4,param_5,param_6);
      }
      else if ((param_3 != 0x85) && (param_3 == 0x83)) {
        FUN_089ba46c(param_1,iVar5 + 0x3c,iVar5 + 0x3c,param_5 + 1,1);
        return;
      }
    }
    else if (param_3 == 0x98) {
      FUN_089b15f4(param_2,param_4,param_5);
      return;
    }
  }
  return;
}

