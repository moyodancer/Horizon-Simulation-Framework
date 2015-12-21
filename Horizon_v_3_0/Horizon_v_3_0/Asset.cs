using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Horizon_v_3_0
{
    class Asset
    {
        protected Position assetPosition;
        protected bool isTaskable;

        public Asset() {
            this.isTaskable = false;
        }
        public Asset(Position pos)
        {
            this.assetPosition = pos;
            this.isTaskable = false;
        }

        public Asset(XMLNode XML pos)
        {
            //   this.assetPosition =
            //     new Position(assetXMLNode.getChildNode("POSITION");
            this.isTaskable = false;
        }
        public Position getPos()
        {
            return this.assetPosition;
        }

        public bool getIsTaskable()
        {
            return this.isTaskable;
        }
    }
}
